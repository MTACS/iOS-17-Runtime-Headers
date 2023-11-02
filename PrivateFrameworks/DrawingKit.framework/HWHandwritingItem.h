
@interface HWHandwritingItem : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _creationDate;
    DKDrawing * _drawing;
    NSUUID * _uuid;
}

@property (retain) NSDate *creationDate;
@property (retain) DKDrawing *drawing;
@property (retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)drawing;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrawing:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDrawing:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
