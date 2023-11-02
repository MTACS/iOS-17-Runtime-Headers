
@interface SignpostSupportMessageArgument : NSObject {
    NSObject * _argumentObject;
    unsigned char  _type;
}

@property (nonatomic, readonly) NSObject *argumentObject;
@property (nonatomic, readonly) unsigned char type;

- (void).cxx_destruct;
- (id)argumentObject;
- (id)initWithArgumentObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned char)type;

@end
