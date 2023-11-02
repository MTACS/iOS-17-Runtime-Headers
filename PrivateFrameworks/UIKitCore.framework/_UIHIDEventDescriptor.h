
@interface _UIHIDEventDescriptor : NSObject <NSCopying> {
    unsigned int  _eventType;
    unsigned long long  _senderID;
    long long  _usage;
    long long  _usagePage;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
