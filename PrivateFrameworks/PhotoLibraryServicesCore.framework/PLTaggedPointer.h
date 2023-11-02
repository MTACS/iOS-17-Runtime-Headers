
@interface PLTaggedPointer : NSObject {
    union { 
        unsigned long long unsignedPayload; 
        long long signedPayload; 
    }  _payload;
}

+ (id)newInstanceWithPayload:(unsigned long long)arg1;
+ (id)newInstanceWithSignedPayload:(long long)arg1;
+ (unsigned short)tag;
+ (bool)taggedPointersEnabled;

- (unsigned long long)hash;
- (id)initWithPayload:(unsigned long long)arg1;
- (id)initWithSignedPayload:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTaggedPointer;
- (unsigned long long)payload;
- (long long)signedPayload;

@end
