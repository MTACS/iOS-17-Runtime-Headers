
@interface NSPersistentHistoryToken : NSObject <NSCopying, NSSecureCoding>

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTransactionNumber:(id)arg1 andStoreID:(id)arg2;
- (id)storeTokens;

// Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon

+ (id)ed_unarchivedTokenWithData:(id)arg1 error:(id*)arg2;

- (id)ed_archiveTokenWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)rc_unarchivedTokenWithData:(id)arg1;

- (id)rc_archiveToken;

@end
