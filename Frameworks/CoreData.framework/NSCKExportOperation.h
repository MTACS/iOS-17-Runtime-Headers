
@interface NSCKExportOperation : NSManagedObject

@property (nonatomic, retain) NSCKExportMetadata *exportMetadata;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSSet *objects;
@property (nonatomic) unsigned long long status;
@property (nonatomic, retain) NSNumber *statusNum;

+ (id)entityPath;

- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
