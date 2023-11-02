
@interface NEDNSResourceRecord : NSObject {
    unsigned long long  _dataLength;
    NSString * _name;
    long long  _recordClass;
    NSString * _resourceString;
    unsigned long long  _timeToLive;
    long long  _type;
}

@property (readonly) unsigned long long dataLength;
@property (readonly) NSString *name;
@property (readonly) long long recordClass;
@property (readonly) NSString *resourceString;
@property (readonly) unsigned long long timeToLive;
@property (readonly) long long type;

- (void).cxx_destruct;
- (unsigned long long)dataLength;
- (id)name;
- (long long)recordClass;
- (id)resourceString;
- (unsigned long long)timeToLive;
- (long long)type;

@end
