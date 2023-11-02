
@interface TCMLCHARGraph : NSObject

+ (id)defineGraphConv:(id)arg1 input:(id)arg2 graph:(id)arg3 descriptor:(id)arg4 weights:(id)arg5;
+ (id)defineResidual:(id)arg1 input:(id)arg2 graph:(id)arg3 descriptor:(id)arg4 weights:(id)arg5;
+ (id)defineSTGCN:(id)arg1 input:(id)arg2 graph:(id)arg3 descriptor:(id)arg4 weights:(id)arg5;
+ (id)defineSTGCNAction:(id)arg1 input:(id)arg2 graph:(id)arg3 descriptor:(id)arg4 weights:(id)arg5;
+ (id)defineTemporalConvolutionalNetwork:(id)arg1 input:(id)arg2 graph:(id)arg3 descriptor:(id)arg4 weights:(id)arg5;

@end
