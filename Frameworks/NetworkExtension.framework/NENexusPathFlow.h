
@interface NENexusPathFlow : NENexusFlow {
    NWPath * _path;
}

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)endpoint;
- (id)parameters;

@end
