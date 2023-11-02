
@interface STSExpressEventInfo : NSObject {
    unsigned int  _state;
}

@property (nonatomic, readonly) unsigned int state;

- (id)initWithState:(unsigned int)arg1;
- (unsigned int)state;

@end
