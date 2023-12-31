
@interface TVRCDeviceInfo : NSObject {
    NSString * _airplayID;
    NSString * _mediaRemoteID;
}

@property (readonly) NSString *airplayID;
@property (readonly) NSString *mediaRemoteID;

- (void).cxx_destruct;
- (void)_populateValidIdentifiers:(id)arg1;
- (id)airplayID;
- (bool)containsID:(id)arg1;
- (id)description;
- (id)mediaRemoteID;

@end
