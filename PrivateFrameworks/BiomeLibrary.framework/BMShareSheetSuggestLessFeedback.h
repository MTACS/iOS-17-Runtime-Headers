
@interface BMShareSheetSuggestLessFeedback : BMEventBase <BMStoreData> {
    NSString * _bundleID;
    NSString * _contactID;
    NSString * _conversationIdentifier;
    NSString * _derivedIntentIdentifier;
    NSString * _handle;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *contactID;
@property (nonatomic, readonly) NSString *conversationIdentifier;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *derivedIntentIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)bundleID;
- (id)contactID;
- (id)conversationIdentifier;
- (unsigned int)dataVersion;
- (id)derivedIntentIdentifier;
- (id)description;
- (id)handle;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 derivedIntentIdentifier:(id)arg3 handle:(id)arg4 contactID:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
