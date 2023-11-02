
@interface PTCinematographyNetworkSignal : NSObject {
    unsigned long long  _count;
    NSString * _name;
}

@property (readonly) unsigned long long count;
@property (readonly) NSString *name;

+ (id)networkSignalWithModelDictionary:(id)arg1;
+ (Class)subclassForName:(id)arg1;

- (void).cxx_destruct;
- (bool)checkSignalForStream:(id)arg1;
- (unsigned long long)count;
- (id)initWithModelDictionary:(id)arg1;
- (id)name;
- (void)writePayload:(id)arg1 toStream:(id)arg2;

@end
