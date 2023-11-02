
@interface SESTLKRecord : NSObject {
    NSData * _parentTLKUUID;
    NSData * _recordData;
    NSData * _tlkUUID;
    NSString * _view;
}

@property (readonly) NSData *parentTLKUUID;
@property (readonly) NSData *recordData;
@property (readonly) NSData *tlkUUID;
@property (readonly) NSString *view;

+ (id)withCKKSExternalKey:(id)arg1;
+ (id)withView:(id)arg1 tlkUUID:(id)arg2 parentTLKUUID:(id)arg3 recordData:(id)arg4;

- (void).cxx_destruct;
- (id)asCKKSExternalKey;
- (id)parentTLKUUID;
- (id)recordData;
- (id)tlkUUID;
- (id)view;

@end
