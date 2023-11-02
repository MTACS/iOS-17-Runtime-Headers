
@interface PBKeyedUnarchiver : NSKeyedUnarchiver {
    NSSet * _allowedClasses;
}

@property (nonatomic, copy) NSSet *allowedClasses;

- (void).cxx_destruct;
- (id)allowedClasses;
- (void)setAllowedClasses:(id)arg1;

@end
