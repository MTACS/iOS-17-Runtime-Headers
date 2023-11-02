
@interface MBMessage : NSObject <NSKeyedArchiverDelegate> {
    MBConnection * _connection;
    NSMutableDictionary * _messageInfo;
    NSMutableDictionary * _replyInfo;
    NSObject<OS_xpc_object> * _xpcObject;
}

@property (nonatomic, readonly) NSArray *arguments;
@property (nonatomic, retain) MBConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *messageInfo;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *personaIdentifier;
@property (nonatomic, retain) NSObject<NSSecureCoding><NSCopying> *reply;
@property (nonatomic, retain) NSError *replyError;
@property (nonatomic, retain) NSMutableDictionary *replyInfo;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcObject;

+ (id)_allowedClasses;
+ (id)messageWithName:(id)arg1 arguments:(id)arg2;
+ (id)messageWithName:(id)arg1 arguments:(id)arg2 personaIdentifier:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithXPCObject:(id)arg1;
- (id)_xpcObject;
- (void)archiver:(id)arg1 didEncodeObject:(id)arg2;
- (id)arguments;
- (id)connection;
- (id)description;
- (id)error;
- (id)initWithName:(id)arg1 arguments:(id)arg2;
- (id)messageInfo;
- (id)name;
- (id)personaIdentifier;
- (id)reply;
- (id)replyError;
- (id)replyInfo;
- (void)sendReply;
- (void)setConnection:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMessageInfo:(id)arg1;
- (void)setReply:(id)arg1;
- (void)setReplyError:(id)arg1;
- (void)setReplyInfo:(id)arg1;
- (void)setXpcObject:(id)arg1;
- (id)xpcObject;

@end
