
@interface WFShareSheetWorkflow : NSObject <NSSecureCoding> {
    unsigned short  _glyphCharacter;
    struct CGImage { } * _iconImage;
    double  _iconScale;
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned short glyphCharacter;
@property (nonatomic, readonly) struct CGImage { }*iconImage;
@property (nonatomic, readonly) double iconScale;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)glyphCharacter;
- (struct CGImage { }*)iconImage;
- (double)iconScale;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 glyphCharacter:(unsigned short)arg3;
- (id)name;
- (void)setIconImage:(struct CGImage { }*)arg1 scale:(double)arg2;

@end
