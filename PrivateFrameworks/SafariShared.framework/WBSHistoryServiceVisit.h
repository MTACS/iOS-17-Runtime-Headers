
@interface WBSHistoryServiceVisit : WBSHistoryServiceObject {
    long long  _attributes;
    bool  _httpNonGet;
    long long  _itemID;
    bool  _loadSuccessful;
    long long  _origin;
    long long  _redirectDestination;
    long long  _redirectSource;
    int  _score;
    bool  _synthesized;
    NSString * _title;
    double  _visitTime;
}

@property (nonatomic) long long attributes;
@property (nonatomic, readonly) bool httpNonGet;
@property (nonatomic, readonly) long long itemID;
@property (nonatomic, readonly) bool loadSuccessful;
@property (nonatomic) long long origin;
@property (nonatomic) long long redirectDestination;
@property (nonatomic) long long redirectSource;
@property (nonatomic) int score;
@property (nonatomic, readonly) bool synthesized;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) double visitTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDatabaseID:(long long)arg1 serviceVisit:(id)arg2;
- (long long)attributes;
- (void)encodeWithCoder:(id)arg1;
- (bool)httpNonGet;
- (id)initWithCoder:(id)arg1;
- (id)initWithSQLRow:(id)arg1;
- (id)initWithVisit:(id)arg1;
- (long long)itemID;
- (bool)loadSuccessful;
- (long long)origin;
- (long long)redirectDestination;
- (long long)redirectSource;
- (int)score;
- (void)setAttributes:(long long)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setRedirectDestination:(long long)arg1;
- (void)setRedirectSource:(long long)arg1;
- (void)setScore:(int)arg1;
- (void)setTitle:(id)arg1;
- (bool)synthesized;
- (id)title;
- (double)visitTime;
- (id)visitWithUpdatedID:(long long)arg1 updatedItemID:(long long)arg2;

@end
