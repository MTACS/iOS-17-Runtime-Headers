
@interface SKPlaySound : SKAction {
    NSString * _fileName;
    NSString * _filePath;
    struct SKCPlaySound { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; bool x6; double x7; double x8; float x9; float x10; double x11; bool x12; bool x13; id /* block */ x14; long long x15; float x16; float x17; float x18; float x19; id x20; bool x21; bool x22; } * _mycaction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    SKSoundSource * _soundSource;
}

+ (id)_audioURLWithName:(id)arg1 bundle:(id)arg2;
+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint { double x1; double x2; })arg2 waitForCompletion:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
