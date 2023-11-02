
@interface ASTUploadClientFactory : NSObject

+ (id)repairToolUploadClientWithASTSession:(id)arg1 withUploadRequests:(id)arg2 andDelegate:(id)arg3;
+ (id)repairToolUploadClientWithUploadRequests:(id)arg1 andDelegate:(id)arg2;
+ (id)uploadClientWithASTSession:(id)arg1 andFileMap:(id)arg2 andUrlFactory:(id)arg3 andDelegate:(id)arg4;

@end
