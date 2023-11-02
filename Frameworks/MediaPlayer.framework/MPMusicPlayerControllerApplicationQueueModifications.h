
@interface MPMusicPlayerControllerApplicationQueueModifications : NSObject <NSSecureCoding> {
    NSDictionary * _insertedDescriptors;
    NSArray * _removedItemIdentifiers;
}

@property (nonatomic, readonly) NSDictionary *insertedDescriptors;
@property (nonatomic, readonly) NSArray *removedItemIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInsertedDescriptors:(id)arg1 removedItemIdentifiers:(id)arg2;
- (id)insertedDescriptors;
- (id)removedItemIdentifiers;

@end
