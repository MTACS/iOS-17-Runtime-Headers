
@interface SESBootUUID : NSObject {
    NSString * _bootUUID;
}

+ (id)getInstance;
+ (bool)isFirstLaunchAfterBootForKey:(id)arg1;
+ (void)setFirstLaunchAfterBootDoneForKey:(id)arg1;

- (void).cxx_destruct;

@end
