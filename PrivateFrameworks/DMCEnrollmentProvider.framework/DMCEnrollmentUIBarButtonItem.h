
@interface DMCEnrollmentUIBarButtonItem : UIBarButtonItem {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

- (id)initWithType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (unsigned long long)type;

@end
