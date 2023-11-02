
@interface AVCMediaRecorderConfiguration : NSObject {
    unsigned int  _mediaAvailability;
}

@property (nonatomic) unsigned int mediaAvailability;

+ (id)newClientDictionary:(id)arg1 clientPid:(int)arg2;

- (id)description;
- (id)dictionary;
- (unsigned int)mediaAvailability;
- (void)setMediaAvailability:(unsigned int)arg1;

@end
