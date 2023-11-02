
@protocol BCCloudDataMapper

@required

- (BCMutableCloudData *)cloudDataFromRecord:(CKRecord *)arg1;
- (CKRecord *)recordFromCloudData:(BCMutableCloudData *)arg1;

@end
