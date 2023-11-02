
@interface IAMICStorageProvider : NSObject {
    <IAMMessageEntryProvider> * _messageEntryProvider;
    <IAMMessageMetadataStorage> * _messageMetadataStorage;
    <IAMPropertyStorage> * _propertyStorage;
}

@property (nonatomic, readonly) <IAMMessageEntryProvider> *messageEntryProvider;
@property (nonatomic, readonly) <IAMMessageMetadataStorage> *messageMetadataStorage;
@property (nonatomic, readonly) <IAMPropertyStorage> *propertyStorage;

- (void).cxx_destruct;
- (id)messageEntryProvider;
- (id)messageMetadataStorage;
- (id)propertyStorage;

@end
