
@interface TRIPBEnumDescriptor : NSObject {
    int (* enumVerifier_;
    const char * extraTextFormatInfo_;
    unsigned int * nameOffsets_;
    NSString * name_;
    unsigned int  valueCount_;
    const char * valueNames_;
    const int * values_;
}

@property (nonatomic, readonly) int (*enumVerifier;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)allocDescriptorForName:(id)arg1 valueNames:(const char *)arg2 values:(const int*)arg3 count:(unsigned int)arg4 enumVerifier:(int (*)arg5;
+ (id)allocDescriptorForName:(id)arg1 valueNames:(const char *)arg2 values:(const int*)arg3 count:(unsigned int)arg4 enumVerifier:(int (*)arg5 extraTextFormatInfo:(const char *)arg6;

- (void)calcValueNameOffsets;
- (void)dealloc;
- (id)enumNameForValue:(int)arg1;
- (int (*)enumVerifier;
- (bool)getValue:(int*)arg1 forEnumName:(id)arg2;
- (bool)getValue:(int*)arg1 forEnumTextFormatName:(id)arg2;
- (id)initWithName:(id)arg1 valueNames:(const char *)arg2 values:(const int*)arg3 count:(unsigned int)arg4 enumVerifier:(int (*)arg5;
- (id)name;
- (id)textFormatNameForValue:(int)arg1;

@end
