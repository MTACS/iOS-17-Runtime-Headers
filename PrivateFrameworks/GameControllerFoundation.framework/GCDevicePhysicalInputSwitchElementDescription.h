
@interface GCDevicePhysicalInputSwitchElementDescription : GCDevicePhysicalInputElementDescription <NSSecureCoding> {
    bool  _canWrap;
    unsigned long long  _eventPositionField;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _positionRange;
    bool  _sequential;
    NSArray * _sources;
}

@property (nonatomic) bool canWrap;
@property (nonatomic) unsigned long long eventPositionField;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } positionRange;
@property (getter=isSequential, nonatomic) bool sequential;
@property (nonatomic, copy) NSArray *sources;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canWrap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventPositionField;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSequential;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })positionRange;
- (void)setCanWrap:(bool)arg1;
- (void)setEventPositionField:(unsigned long long)arg1;
- (void)setPositionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSequential:(bool)arg1;
- (void)setSources:(id)arg1;
- (id)sources;

// Image: /System/Library/Frameworks/GameController.framework/GameController

+ (Class)parametersClass;

- (id)makeParameters;

@end
