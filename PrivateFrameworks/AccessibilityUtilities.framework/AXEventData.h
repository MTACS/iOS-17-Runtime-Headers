
@interface AXEventData : NSObject {
    struct _AXEventDataStorage { 
        long long eventSenderIdentifier; 
        long long page; 
        long long usage; 
        long long modifierFlags; 
        float eventValue1; 
        float eventValue2; 
    }  _storage;
}

@property (nonatomic, readonly) char *dataBytes;
@property (nonatomic, readonly) long long dataLength;
@property (nonatomic, readonly) long long eventSenderIdentifier;
@property (nonatomic, readonly) float eventValue1;
@property (nonatomic, readonly) float eventValue2;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, readonly) long long page;
@property (nonatomic, readonly) long long usage;
@property (nonatomic, readonly) bool wasPostedByAccessibility;

+ (id)dataWithBytes:(char *)arg1 length:(long long)arg2;
+ (id)dataWithSender:(long long)arg1;
+ (id)dataWithSender:(long long)arg1 page:(long long)arg2 usage:(long long)arg3 modifierFlags:(long long)arg4 eventValue1:(float)arg5 eventValue2:(float)arg6;

- (char *)dataBytes;
- (long long)dataLength;
- (id)description;
- (long long)eventSenderIdentifier;
- (float)eventValue1;
- (float)eventValue2;
- (id)init;
- (long long)modifierFlags;
- (long long)page;
- (long long)usage;
- (bool)wasPostedByAccessibility;

@end
