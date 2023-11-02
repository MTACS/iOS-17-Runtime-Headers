
@interface AMSOptional : NSObject {
    id  _value;
}

@property (nonatomic, readonly) id value;

+ (id)optionalWithNil;
+ (id)optionalWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithValue:(id)arg1;
- (id)value;

@end
