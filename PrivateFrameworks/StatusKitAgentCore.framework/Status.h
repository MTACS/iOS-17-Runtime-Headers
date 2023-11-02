
@interface Status : NSManagedObject

@property (nonatomic, copy) NSString *channelIdentifier;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateExpired;
@property (nonatomic, copy) NSDate *datePublished;
@property (nonatomic, copy) NSDate *dateReceived;
@property (nonatomic, retain) NSData *rawData;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (id)channelIdentifierKeyPath;
+ (id)dateCreatedKeyPath;
+ (id)datePublishedKeyPath;
+ (id)fetchRequest;
+ (id)predicateForChannelIdentifier:(id)arg1;
+ (id)predicateForStatusUniqueIdentifier:(id)arg1;
+ (id)sortDescriptorForDateCreatedAscending:(bool)arg1;
+ (id)sortDescriptorForDatePublishedAscending:(bool)arg1;
+ (id)uniqueIdentifierKeyPath;

@end
