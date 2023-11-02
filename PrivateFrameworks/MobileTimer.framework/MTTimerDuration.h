
@interface MTTimerDuration : NSObject <NAEquatable, NSCopying, NSSecureCoding> {
    double  _duration;
    NSDate * _lastModified;
    MTSound * _sound;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastModified;
@property (nonatomic, retain) MTSound *sound;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hashString;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 duration:(double)arg2;
- (id)initWithTitle:(id)arg1 duration:(double)arg2 sound:(id)arg3;
- (id)initWithTitle:(id)arg1 duration:(double)arg2 sound:(id)arg3 lastModified:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDuration:(id)arg1;
- (id)lastModified;
- (void)setDuration:(double)arg1;
- (void)setLastModified:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sound;
- (id)title;

@end
