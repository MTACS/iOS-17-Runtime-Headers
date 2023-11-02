
@interface MLRInternalBMLTTask : NSObject <MLRInternalTaskRepresenting, NSSecureCoding> {
    TRIFactorsState * _factorsState;
    NSString * _pluginID;
    MLRBMLTSchedulingPolicy * _policy;
    DESRecordSet * _recordSet;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSString * _taskID;
    TRIClientBackgroundMLTask * _triBMLT;
    TRIClient * _triClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TRIFactorsState *factorsState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *pluginID;
@property (nonatomic, readonly) MLRBMLTSchedulingPolicy *policy;
@property (nonatomic, readonly) DESRecordSet *recordSet;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *taskID;
@property (nonatomic, readonly) TRIClientBackgroundMLTask *triBMLT;
@property (nonatomic, readonly) TRIClient *triClient;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MLRSandboxExtensionRequests;
- (id)MLRTaskWithError:(id*)arg1;
- (id)attachmentsDirURL;
- (id)description;
- (bool)downloadFactorsSynchronouslyWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateTargetingExpressionForPlugin:(id)arg1 error:(id*)arg2;
- (bool)evaluateTargetingExpressionWithParameters:(id)arg1 error:(id*)arg2;
- (id)factorsState;
- (bool)fetchDataIfNecessaryWithError:(id*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTRIClientBackgroundMLTask:(id)arg1 factorsState:(id)arg2;
- (id)initWithTRIClientBackgroundMLTask:(id)arg1 factorsState:(id)arg2 recordSet:(id)arg3;
- (id)performOnPlugin:(id)arg1 error:(id*)arg2;
- (id)pluginID;
- (id)policy;
- (id)recipeURL;
- (id)recordSet;
- (id)submissionServer;
- (bool)submitTask:(id)arg1 result:(id)arg2 duration:(double)arg3 errorToBeSubmitted:(id)arg4 error:(id*)arg5;
- (id)taskAttachmentsWithError:(id*)arg1;
- (id)taskID;
- (id)taskParametersWithError:(id*)arg1;
- (id)triBMLT;
- (id)triClient;

@end
