
@protocol PHASESessionInterface <NSObject>

@required

- (bool)registerActivateAudioSessionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, bool, void*
- (bool)registerFadeClientsInAudioSessionBlock:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, int, id /* block */, unsigned int, bool, float, float, void*
- (bool)setClientStateFromCallbackOnSession:(unsigned int)arg1 clientToken:(void*)arg2 modes:(unsigned int)arg3 state:(unsigned int)arg4 outDuckingInfo:(struct AudioSessionDuckingInfo { bool x1; float x2; float x3; }*)arg5;
- (bool)setClientStateOnSession:(unsigned int)arg1 clientToken:(void*)arg2 modes:(unsigned int)arg3 state:(unsigned int)arg4 outDuckingInfo:(struct AudioSessionDuckingInfo { bool x1; float x2; float x3; }*)arg5;
- (bool)setInputMuteStateFromCallbackOnSession:(unsigned int)arg1 clientToken:(void*)arg2 isMuted:(bool)arg3;
- (bool)setInputMuteStateOnSession:(unsigned int)arg1 clientToken:(void*)arg2 isMuted:(bool)arg3;

@optional

- (bool)registerMuteInputClientsInAudioSessionBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, int, id /* block */, unsigned int, bool, float, void*
- (<PHASESessionVolumeInterface> *)sessionVolumeInterface;

@end
