
@interface MFMessageDataContainer : NSObject {
    NSData * _data;
    bool  _incomplete;
    bool  _partial;
}

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 partial:(bool)arg2 incomplete:(bool)arg3;

@end
