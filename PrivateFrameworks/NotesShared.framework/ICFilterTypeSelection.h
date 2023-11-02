
@interface ICFilterTypeSelection : NSObject <NSCopying> {
    NSManagedObjectID * _accountObjectID;
    long long  _filterType;
}

@property (nonatomic, retain) NSManagedObjectID *accountObjectID;
@property (nonatomic, readonly) NSString *emptySummary;
@property (nonatomic, readonly) NSString *emptySummaryTitle;
@property (nonatomic, readonly) NSString *filterName;
@property (nonatomic, readonly) long long filterType;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSString *rawFilterValue;
@property (nonatomic, readonly) NSString *shortEmptySummary;

+ (id)keyPathsForValuesAffectingIsValid;

- (void).cxx_destruct;
- (id)accountObjectID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)emptySummary;
- (id)emptySummaryTitle;
- (id)filterName;
- (long long)filterType;
- (bool)isEmpty;
- (bool)isValid;
- (id)rawFilterValue;
- (void)setAccountObjectID:(id)arg1;
- (id)shortEmptySummary;

@end
