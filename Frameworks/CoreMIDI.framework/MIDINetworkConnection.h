
@interface MIDINetworkConnection : NSObject {
    void * _imp;
}

@property (nonatomic, readonly) MIDINetworkHost *host;

+ (id)connectionWithHost:(id)arg1;

- (void)dealloc;
- (id)host;
- (id)init;

@end
