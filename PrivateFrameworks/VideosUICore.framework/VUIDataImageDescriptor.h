
@interface VUIDataImageDescriptor : NSObject {
    NSData * _data;
    bool  _templated;
}

@property (nonatomic, readonly) NSData *data;
@property (getter=isTemplated, nonatomic) bool templated;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1;
- (bool)isTemplated;
- (void)setTemplated:(bool)arg1;

@end
