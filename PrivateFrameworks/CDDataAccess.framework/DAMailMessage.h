
@interface DAMailMessage : NSObject <NSCoding>

- (id)attachments;
- (id)bcc;
- (id)body;
- (int)bodySize;
- (int)bodyTruncated;
- (int)bodyType;
- (id)cc;
- (id)clientID;
- (id)conversationId;
- (id)conversationIndex;
- (id)date;
- (id)displayTo;
- (void)encodeWithCoder:(id)arg1;
- (bool)flagged;
- (bool)flaggedIsSet;
- (id)folderID;
- (id)from;
- (int)importance;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isDraft;
- (int)lastVerb;
- (id)longID;
- (bool)meetingRequestIsActionable;
- (id)meetingRequestMetaData;
- (id)meetingRequestUUID;
- (id)messageClass;
- (id)preview;
- (bool)read;
- (bool)readIsSet;
- (id)remoteID;
- (id)replyTo;
- (id)rfc822Data;
- (id)sender;
- (id)serverID;
- (int)smimeType;
- (id)subject;
- (id)threadTopic;
- (id)to;
- (bool)verbIsSet;

@end
