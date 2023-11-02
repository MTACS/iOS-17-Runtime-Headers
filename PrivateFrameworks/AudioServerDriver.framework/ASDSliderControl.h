
@interface ASDSliderControl : ASDControl {
    struct _ASDSliderRange { 
        unsigned int mMinimum; 
        unsigned int mMaximum; 
    }  _range;
    bool  _settable;
    unsigned int  _value;
    NSObject<OS_dispatch_queue> * _valueQueue;
}

@property (nonatomic) struct _ASDSliderRange { unsigned int x1; unsigned int x2; } range;
@property (getter=isSettable, nonatomic, readonly) bool settable;
@property (nonatomic) unsigned int value;

+ (id)sliderControlWithValue:(unsigned int)arg1 andRange:(struct _ASDSliderRange { unsigned int x1; unsigned int x2; })arg2 isSettable:(bool)arg3 forElement:(unsigned int)arg4 inScope:(unsigned int)arg5 withPlugin:(id)arg6;

- (void).cxx_destruct;
- (unsigned int)baseClass;
- (bool)changeValue:(unsigned int)arg1;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (id)driverClassName;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned int)arg4;
- (id)initWithPlugin:(id)arg1;
- (id)initWithValue:(unsigned int)arg1 andRange:(struct _ASDSliderRange { unsigned int x1; unsigned int x2; })arg2 isSettable:(bool)arg3 forElement:(unsigned int)arg4 inScope:(unsigned int)arg5 withPlugin:(id)arg6;
- (id)initWithValue:(unsigned int)arg1 andRange:(struct _ASDSliderRange { unsigned int x1; unsigned int x2; })arg2 isSettable:(bool)arg3 forElement:(unsigned int)arg4 inScope:(unsigned int)arg5 withPlugin:(id)arg6 andObjectClassID:(unsigned int)arg7;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (bool)isSettable;
- (struct _ASDSliderRange { unsigned int x1; unsigned int x2; })range;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setRange:(struct _ASDSliderRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setValue:(unsigned int)arg1;
- (unsigned int)value;

@end
