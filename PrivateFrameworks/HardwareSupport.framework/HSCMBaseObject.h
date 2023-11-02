
@interface HSCMBaseObject : NSObject <HSCMBaseObjectInterface> {
    struct OpaqueCMBaseObject { } * _underlyingObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct OpaqueCMBaseObject { }*underlyingObject;

+ (id)statusDescription:(int)arg1;

- (id)initWithBaseObject:(struct OpaqueCMBaseObject { }*)arg1;
- (bool)setValue:(id)arg1 forProperty:(struct __CFString { }*)arg2 error:(id*)arg3;
- (struct OpaqueCMBaseObject { }*)underlyingObject;
- (id)valueForProperty:(struct __CFString { }*)arg1 error:(id*)arg2;

@end
