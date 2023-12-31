
@interface HIDDisplayPresetData : NSObject {
    HIDDisplayPresetInterface * _deviceRef;
    long long  _index;
}

@property (readonly) NSData *uniqueID;
@property (readonly) bool valid;
@property (readonly) bool writable;

- (void).cxx_destruct;
- (id)get:(id*)arg1;
- (id)hidDisplay;
- (id)initWithDisplayDevice:(id)arg1 index:(long long)arg2;
- (bool)set:(id)arg1 error:(id*)arg2;
- (void)setHidDisplay:(id)arg1;
- (id)uniqueID;
- (bool)valid;
- (bool)writable;

@end
