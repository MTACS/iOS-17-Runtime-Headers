
@interface TRIBmltDeploymentId : TRIPBMessage

@property (nonatomic) bool hasId_p;
@property (nonatomic) bool hasTaskId;
@property (nonatomic) unsigned int id_p;
@property (nonatomic, copy) NSString *taskId;

+ (id)descriptor;

@end
