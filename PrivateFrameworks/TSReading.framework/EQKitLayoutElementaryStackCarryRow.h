
@interface EQKitLayoutElementaryStackCarryRow : EQKitLayoutElementaryStackDigitRow <EQKitLayoutElementaryStackRow> {
    struct vector<EQKitTypes::Crossout::Enum, std::allocator<EQKitTypes::Crossout::Enum>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<EQKitTypes::Crossout::Enum *, std::allocator<EQKitTypes::Crossout::Enum>> { 
            int *__value_; 
        } __end_cap_; 
    }  mCrossouts;
}

@property (nonatomic, readonly) long long alignmentShift;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long firstColumnIndex;
@property (nonatomic, readonly) double followingSpace;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool spansStack;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)crossoutAtColumnIndex:(unsigned long long)arg1;
- (id)initWithChildren:(id)arg1 decimalPoint:(unsigned long long)arg2 position:(long long)arg3 followingSpace:(double)arg4 crossouts:(const void*)arg5;
- (void)populateMaxColumnWidths:(struct __wrap_iter<double *> { double *x1; })arg1;

@end
