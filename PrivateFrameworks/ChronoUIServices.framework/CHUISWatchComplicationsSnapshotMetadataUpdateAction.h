
@interface CHUISWatchComplicationsSnapshotMetadataUpdateAction : BSAction {
    NSArray * _urls;
}

@property (nonatomic, readonly, retain) CHUISWatchComplicationsWidgetSnapshotMetadata *metadata;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithMetadata:(id)arg1 directory:(id)arg2 completion:(id /* block */)arg3;
- (id)metadata;

@end
