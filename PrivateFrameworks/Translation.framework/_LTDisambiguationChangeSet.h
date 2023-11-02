
@interface _LTDisambiguationChangeSet : NSObject <NSCopying> {
    NSNumber * _genderNumber;
    NSString * _meaningDescription;
}

@property (nonatomic, readonly, copy) NSNumber *genderNumber;
@property (nonatomic, readonly, copy) NSString *meaningDescription;

- (void).cxx_destruct;
- (void)addUserSelection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)genderNumber;
- (bool)hasAnyChangeOfType:(unsigned long long)arg1;
- (id)meaningDescription;

@end
