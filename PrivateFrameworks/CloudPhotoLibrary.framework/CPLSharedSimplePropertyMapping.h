
@interface CPLSharedSimplePropertyMapping : NSObject <CPLSharedRecordPropertyMapping>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)shouldUpdatePropertyOnPrivateRecord:(id)arg1 recordClass:(Class)arg2;
- (bool)shouldUpdatePropertyOnSharedRecord:(id)arg1 recordClass:(Class)arg2;

@end
