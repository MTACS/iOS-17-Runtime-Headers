
@interface _VOSProfileGesture : NSObject <NSSecureCoding> {
    _VOSProfileCommand * _command;
    VOSGesture * _gesture;
}

@property (nonatomic) _VOSProfileCommand *command;
@property (nonatomic, retain) VOSGesture *gesture;

+ (id)profileGestureWithGesture:(id)arg1;
+ (id)profileGestureWithStringValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithGesture:(id)arg1;
- (id)command;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gesture;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setGesture:(id)arg1;

@end
