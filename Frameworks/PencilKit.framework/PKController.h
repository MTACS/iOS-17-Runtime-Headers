
@interface PKController : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSObject<PKControllerDelegate> * _delegate;
    bool  _drawBitmapEraserMask;
    PKDrawing * _drawing;
    NSObject<OS_dispatch_queue> * _drawingQueue;
    NSObject<OS_dispatch_queue> * _interactQueue;
    NSObject<OS_dispatch_semaphore> * _interactSemaphore;
    NSMutableArray * _liveDrawingUndoCommands;
    bool  _liveInteraction;
    PKMetalConfig * _metalConfig;
    NSMutableArray * _mutableRenderedStrokes;
    bool  _onDrawingQueue;
    NSArray * _renderedStrokes;
    PKMetalRendererController * _rendererController;
    bool  _sixChannelBlending;
}

- (void).cxx_destruct;
- (id)init;

@end
