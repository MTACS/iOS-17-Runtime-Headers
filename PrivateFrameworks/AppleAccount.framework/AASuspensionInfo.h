
@interface AASuspensionInfo : NSObject <NSCopying> {
    NSDictionary * _suspensionInfoDictionary;
}

@property (getter=isFamilySuspended, nonatomic, readonly) bool familySuspended;
@property (getter=isiCloudSuspended, nonatomic, readonly) bool iCloudSuspended;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isFamilySuspended;
- (bool)isiCloudSuspended;

@end
