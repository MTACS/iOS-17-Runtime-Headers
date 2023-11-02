
@interface FASharedService : NSObject {
    NSString * _actionURLString;
    NSString * _detailLabel;
    NSString * _displayLabel;
    NSString * _groupID;
    NSString * _iconURLString;
    NSString * _iconURLStringx2;
    NSString * _iconURLStringx3;
    bool  _isDefault;
    bool  _isEnabled;
    bool  _isSeparator;
    NSArray * _memberDetailsViewTypes;
    NSString * _name;
    NSNumber * _order;
    NSArray * _pageViews;
    NSString * _ruiURL;
    NSString * _subLabel;
    NSArray * _subscriberDSIDs;
}

@property (nonatomic, readonly) NSString *actionURLString;
@property (nonatomic, readonly) NSString *detailLabel;
@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *iconURLString;
@property (nonatomic, readonly) NSString *iconURLStringx2;
@property (nonatomic, readonly) NSString *iconURLStringx3;
@property (nonatomic, readonly) bool isDefault;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isSeparator;
@property (nonatomic, readonly) NSArray *memberDetailsViewTypes;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *order;
@property (nonatomic, readonly) NSArray *pageViews;
@property (nonatomic, readonly) NSString *ruiURL;
@property (nonatomic, readonly) NSString *subLabel;
@property (nonatomic, readonly) NSArray *subscriberDSIDs;

+ (id)sortedArray:(id)arg1;

- (void).cxx_destruct;
- (id)actionURLString;
- (id)detailLabel;
- (id)displayLabel;
- (id)groupID;
- (unsigned long long)hash;
- (id)iconURLString;
- (id)iconURLStringx2;
- (id)iconURLStringx3;
- (id)initWithDictionary:(id)arg1;
- (bool)isDefault;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSharedService:(id)arg1;
- (bool)isSeparator;
- (id)memberDetailsViewTypes;
- (id)name;
- (id)order;
- (id)pageViews;
- (id)ruiURL;
- (id)subLabel;
- (id)subscriberDSIDs;

@end
