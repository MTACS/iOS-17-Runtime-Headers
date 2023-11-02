
@interface BLTBBBulletinKey : NSObject <NSCopying> {
    NSString * _publisherMatchID;
    NSString * _sectionID;
}

@property (nonatomic, readonly, copy) NSString *publisherMatchID;
@property (nonatomic, readonly, copy) NSString *sectionID;

+ (id)bulletinKeyWithSectionID:(id)arg1 publisherMatchID:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSectionID:(id)arg1 publisherMatchID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)keyString;
- (id)publisherMatchID;
- (id)sectionID;

@end
