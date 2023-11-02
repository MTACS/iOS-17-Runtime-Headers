
@interface CHTextStrokeTransformationQuery : CHQuery

- (id)debugName;
- (id)strokePointTransformations:(long long)arg1 forContextStrokes:(id)arg2 withTransformationParameters:(id)arg3 completionWithTelemetry:(id /* block */)arg4 shouldCancel:(id /* block */)arg5;
- (id)strokePointTransformationsForContextStrokes:(id)arg1 completionWithTelemetry:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;

@end
