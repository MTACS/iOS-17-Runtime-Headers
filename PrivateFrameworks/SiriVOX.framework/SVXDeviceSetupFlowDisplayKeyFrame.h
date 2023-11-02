
@interface SVXDeviceSetupFlowDisplayKeyFrame : NSObject <NSCopying, NSSecureCoding> {
    double  _duration;
    long long  _keyFrameID;
    double  _offset;
    NSString * _text;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long keyFrameID;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyFrameID:(long long)arg1 text:(id)arg2 offset:(double)arg3 duration:(double)arg4;
- (bool)isEqual:(id)arg1;
- (long long)keyFrameID;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (double)offset;
- (id)text;

@end
