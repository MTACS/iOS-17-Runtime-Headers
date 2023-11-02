
@protocol PGQuestion <NSObject>

@required

- (NSDictionary *)additionalInfo;
- (unsigned short)displayType;
- (NSString *)entityIdentifier;
- (unsigned short)entityType;
- (bool)isEquivalentToPersistedQuestion:(PHQuestion *)arg1;
- (double)localFactoryScore;
- (void)persistWithCreationDate:(NSDate *)arg1 questionVersion:(short)arg2;
- (void)remove;
- (double)score;
- (void)setScore:(double)arg1;
- (unsigned short)state;
- (unsigned short)type;

@end
