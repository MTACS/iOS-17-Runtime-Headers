
@interface ASDSelectorControl : ASDControl {
    bool  _hasKindProperty;
    unsigned long long  _numSelected;
    unsigned int  _selectedValue;
    bool  _settable;
    NSObject<OS_dispatch_queue> * _valueQueue;
    NSMutableArray * _values;
}

@property (nonatomic) bool hasKindProperty;
@property (nonatomic) unsigned int selectedValue;
@property (nonatomic, readonly) NSArray *selectedValues;
@property (getter=isSettable, nonatomic, readonly) bool settable;

- (void).cxx_destruct;
- (id)_findValue:(unsigned int)arg1;
- (unsigned long long)_indexOfValue:(unsigned int)arg1;
- (void)_updateSelectedValue;
- (void)addValue:(id)arg1;
- (unsigned int)baseClass;
- (bool)changeValue:(unsigned int)arg1;
- (bool)changeValues:(const unsigned int*)arg1 withCount:(unsigned long long)arg2;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (id)driverClassName;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (bool)hasKindProperty;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned int)arg4;
- (id)initWithIsSettable:(bool)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4;
- (id)initWithIsSettable:(bool)arg1 forElement:(unsigned int)arg2 inScope:(unsigned int)arg3 withPlugin:(id)arg4 andObjectClassID:(unsigned int)arg5;
- (id)initWithIsSettable:(bool)arg1 withPlugin:(id)arg2;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (bool)isSettable;
- (unsigned int)kindForValue:(unsigned int)arg1;
- (unsigned int)minDataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (id)nameForValue:(unsigned int)arg1;
- (void)removeValue:(id)arg1;
- (unsigned int)selectedValue;
- (id)selectedValues;
- (void)selectionDidChange:(id)arg1;
- (void)setHasKindProperty:(bool)arg1;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setSelectedValue:(unsigned int)arg1;
- (bool)setSelectedValues:(id)arg1;
- (bool)setSelectedValues:(const unsigned int*)arg1 withCount:(unsigned long long)arg2;
- (id)values;

@end
