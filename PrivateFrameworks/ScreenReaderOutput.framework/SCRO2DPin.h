
@interface SCRO2DPin : NSObject {
    union { 
        unsigned long long detent; 
        float height; 
    }  _state;
    unsigned long long  _style;
    unsigned long long  _x;
    unsigned long long  _y;
}

@property union { unsigned long long x1; float x2; } state;
@property (readonly) unsigned long long style;
@property (readonly) unsigned long long x;
@property (readonly) unsigned long long y;

- (id)initWithX:(unsigned long long)arg1 y:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (void)setState:(union { unsigned long long x1; float x2; })arg1;
- (union { unsigned long long x1; float x2; })state;
- (unsigned long long)style;
- (unsigned long long)x;
- (unsigned long long)y;

@end
