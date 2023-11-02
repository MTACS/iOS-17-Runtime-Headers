
@protocol HDSyncMessageHandler

@required

- (bool)sendCodableChange:(NSArray *)arg1 resultAnchor:(long long)arg2 sequence:(long long)arg3 done:(bool)arg4 error:(id*)arg5;
- (bool)sendCodableChange:(NSArray *)arg1 version:(struct { int x1; int x2; })arg2 resultAnchor:(long long)arg3 sequence:(long long)arg4 done:(bool)arg5 error:(id*)arg6;

@end
