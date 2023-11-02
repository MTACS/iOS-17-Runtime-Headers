
@interface CKFetchRecordZoneChangesConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _desiredKeys;
    bool  _fetchChangesMadeByThisDevice;
    bool  _fetchNewestChangesFirst;
    CKServerChangeToken * _previousServerChangeToken;
    unsigned long long  _resultsLimit;
}

@property (copy) NSArray *desiredKeys;
@property bool fetchChangesMadeByThisDevice;
@property bool fetchNewestChangesFirst;
@property (copy) CKServerChangeToken *previousServerChangeToken;
@property unsigned long long resultsLimit;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)desiredKeys;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchChangesMadeByThisDevice;
- (bool)fetchNewestChangesFirst;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)previousServerChangeToken;
- (unsigned long long)resultsLimit;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchChangesMadeByThisDevice:(bool)arg1;
- (void)setFetchNewestChangesFirst:(bool)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;

@end
