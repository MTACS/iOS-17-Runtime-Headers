
@interface BKSHIDEventRedirectAttributes : BKSHIDEventBaseAttributes {
    int  _pid;
}

@property (nonatomic) int pid;

+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)pid;
- (void)setPid:(int)arg1;

@end
