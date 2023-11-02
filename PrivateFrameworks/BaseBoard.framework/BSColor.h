
@interface BSColor : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    double  _alpha;
    double  _blue;
    struct CGColor { } * _colorRef;
    double  _green;
    double  _red;
}

@property (nonatomic, readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double blue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double green;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double red;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)blackColor;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (struct CGColor { }*)CGColor;
- (double)alpha;
- (double)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (double)green;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToColor:(id)arg1;
- (double)red;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

- (id)UIColor;

@end
