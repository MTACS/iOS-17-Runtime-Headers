
@interface SMUFairPlayRemoteServerPlaybackContext : NSObject {
    NSData * _blob;
    unsigned int  _identifier;
}

@property (nonatomic, readonly, copy) NSData *blob;
@property (nonatomic, readonly) unsigned int identifier;

- (void).cxx_destruct;
- (id)blob;
- (unsigned int)identifier;
- (id)initWithBlob:(id)arg1 identifier:(unsigned int)arg2;

@end
